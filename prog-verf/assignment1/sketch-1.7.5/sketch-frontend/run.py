import subprocess
from pathlib import Path
import json
import time
import argparse

# if a log file exists, read it, otherwise create a log dictionary


def getlog(file_path="./log.json"):
    # if log file exists
    if (Path(file_path).is_file()):
        with open(file_path) as fp:
            log = json.load(fp)
    else:
        log = {}
    return log


# parse arguments
parser = argparse.ArgumentParser(description='Solution logger')
parser.add_argument('problemNumber', type=int)
parser.add_argument('filePath', type=str)
args = parser.parse_args()

# capture the code that was executed
with open(args.filePath, "r") as fp:
    source_code = fp.read()

# get log
log = getlog()

# add new entry to log
log[time.time()] = {'problem_number': args.problemNumber,
                    'source_code': source_code}

# write log file
with open("./log.json", "w") as fp:
    json.dump(log, fp)

# execute the code
result = subprocess.run(["./sketch", "--fe-output-code", args.filePath, ])

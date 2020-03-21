package tech.akshat23.currencyconverter;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    public void convertCurrency(View view){

        Log.i(  "Info", "Button Pressed");

        EditText editText = (EditText) findViewById(R.id.editText);

        String amountInPounds = editText.getText().toString();

        double amountInPoundsDouble = Double.parseDouble(amountInPounds);

        double  amountInDollarDouble = amountInPoundsDouble * 1.3;

        String amountInDollar = String.format("%.2f",amountInDollarDouble);

        Toast.makeText(this, amountInPounds + " Pounds is $" + amountInDollar, Toast.LENGTH_LONG).show();

    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}

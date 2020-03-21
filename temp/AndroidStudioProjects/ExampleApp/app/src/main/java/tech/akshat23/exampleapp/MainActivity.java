package tech.akshat23.exampleapp;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.Editable;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    public void clickFunction(View view){

        EditText  nameEditText = (EditText) findViewById(R.id.nameEditText);

        Log.i(  "Info", "Button pressed");

        Log.i(  "Values", nameEditText.getText().toString());

        Toast.makeText( this,"Hi there!", Toast.LENGTH_SHORT).show();

        ImageView image = (ImageView) findViewById(R.id.imageView);
        image.setImageResource(R.drawable.l2);

    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}

package com.example.tfbel.calculadoradeidade

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    fun pressionarBotao(view : View){

        Toast.makeText(this, "test",
        Toast.LENGTH_SHORT).show()

        val text = findViewById<TextView>(R.id.textView4)
        val oldText = text.text.toString()
        text.setText(oldText + "Novo Texto")

        val idade = findViewById<EditText>(R.id.editText2)
        val anos = idade.text.toString().toInt()
        val idadefinal = 2018 - anos
        text.setText(idadefinal.toString())
    }
}

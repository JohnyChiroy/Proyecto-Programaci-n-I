#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Conect
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        st->DataSource = "localhost\SQLEXPRESS";
        st->InitialCatalog = "shopping_app";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }


public:
    void Insert(int num_factura, String^ fecha, int cod_usuario, int id_producto, int cantidad_compra, int precio, int total) {
        Conectar();
        String^ sentencia = "Insert into FACTURA values(@num_factura, @fecha, @cod_usuario, @id_producto, @cantidad_compra, @precio, @total)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@num_factura", num_factura);
        ejecutar->Parameters->AddWithValue("@fecha", fecha);
        ejecutar->Parameters->AddWithValue("@cod_usuario", cod_usuario);
        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
        ejecutar->Parameters->AddWithValue("@cantidad_compra", cantidad_compra);
        ejecutar->Parameters->AddWithValue("@precio", precio);
        ejecutar->Parameters->AddWithValue("@total", total);

        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    /*void Insertar2(int id_producto, String^ desc, float precio) {
        Conectar();
        String^ sentencia = "Insert into PRODUCTO values(@id_producto, @desc, @precio)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
        ejecutar->Parameters->AddWithValue("@desc", desc);
        ejecutar->Parameters->AddWithValue("@precio", precio);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar3(int id_venta, int cantidad, int id_cliente, int id_producto) {
        Conectar();
        String^ sentencia = "Insert into VENTA values(@id_venta, @cantidad, @id_cliente, @id_producto)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@id_cliente", id_cliente);
        ejecutar->Parameters->AddWithValue("@id_producto", id_producto);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }*/
};

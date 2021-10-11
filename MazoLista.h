#pragma once
using namespace System;

class MazoLista
{

	public: struct Node
{
		
		/// <summary>
		/// Información a almacenar
		/// </summary>
		int numCarta;
		/// <summary>
		/// Apuntador hacia siguiente Nodo
		/// </summary>
		Node* next;
	
};
private:
	/// <summary>
	/// Apuntador al primer Nodo dentro de la lista (cabeza)
	/// </summary>
	Node* header = nullptr;



};


/* FUN_005fb760 - __thiscall: reads a 2-word value (from an object at
   this->field_3dc via virtual call, or default from g_7db0ac/ae) into *out. */
extern void __cdecl FUN_005aab90(int);
extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;

__declspec(naked) void func_005fb760(void)
{
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x3dc]
        test esi, esi
        push edi
        jz L_5fb7ac
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esi + 0x78]
        call dword ptr [eax + 0x4]
        mov edi, eax
        mov eax, dword ptr [esi + 0x17c]
        cmp eax, -0x1
        jz L_5fb78b
        test eax, eax
        setnz al
        test al, al
        jz L_5fb7ac
L_5fb78b:
        push 0x1
        mov ecx, esi
        call FUN_005aab90
        mov cx, word ptr [edi + 0x34]
        mov dx, word ptr [edi + 0x36]
        mov eax, dword ptr [esp + 0xc]
        pop edi
        mov word ptr [eax], cx
        mov word ptr [eax + 0x2], dx
        pop esi
        ret 0xc
L_5fb7ac:
        mov eax, dword ptr [esp + 0xc]
        mov cx, word ptr [g_7db0ac]
        mov dx, word ptr [g_7db0ae]
        pop edi
        mov word ptr [eax], cx
        mov word ptr [eax + 0x2], dx
        pop esi
        ret 0xc
    }
}

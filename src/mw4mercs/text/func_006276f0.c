/* FUN_006276f0 - __thiscall, 444 bytes
   ABL interpreter region. Iterates a list of objects, updates state fields,
   and dispatches virtual calls. */
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00628d30(void);
extern void __cdecl FUN_00628d70(void);
extern void __cdecl FUN_00628c80(void);
extern void __cdecl FUN_00628cc0(void);
extern void __cdecl FUN_00628d00(void);
extern void __cdecl FUN_00627a80(void);
extern void __cdecl FUN_00627ad0(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void func_006276f0(void)
{
    __asm {
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi+0xfc]
        sub eax, dword ptr [edi+0xf8]
        test eax, 0xfffffffc
        jz L_8aa
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        push ebx
        push esi
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx+0x2c]
        xor ecx, 0x85739531
        lea eax, [edx+0x2c]
        jz L_77a
        mov edx, dword ptr [eax]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x6b0]
        test eax, eax
        jz L_77a
        lea ebx, [edi+0x44]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jz L_77a
        mov eax, dword ptr [g_7dab44]
        mov esi, dword ptr [eax]
        mov edx, dword ptr [g_7dab40]
        mov ecx, ebx
        xor esi, edx
        call FUN_0041fd80
        mov ecx, dword ptr [esi+0x2c]
        xor ecx, 0x85739531
        mov ecx, dword ptr [ecx+0x6b0]
        push eax
        call FUN_004c3d50
        mov ecx, ebx
        call FUN_0041fcb0
    L_77a:
        mov esi, dword ptr [edi+0xf8]
        mov ebx, dword ptr [edi+0xfc]
        cmp esi, ebx
        jz L_798
    L_78a:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0x10]
        add esi, 4
        cmp esi, ebx
        jnz L_78a
    L_798:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx+0xc]
        xor edx, 0x85739531
        mov al, byte ptr [edx+0x17]
        test al, al
        jnz L_7c0
        mov ecx, dword ptr [edi+0x138]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x14]
    L_7c0:
        xor ecx, ecx
        mov cl, byte ptr [edi+0x169]
        mov dword ptr [edi+0x3c], 2
        push ecx
        mov ecx, edi
        call FUN_00628d30
        mov al, byte ptr [edi+0x16b]
        test al, al
        jnz L_834
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax+0x2c]
        add eax, 0x2c
        xor ecx, 0x85739531
        mov dl, byte ptr [ecx+0x584]
        test dl, dl
        jnz L_82c
        mov edx, dword ptr [eax]
        xor edx, 0x85739531
        mov cl, byte ptr [edx+0x586]
        test cl, cl
        jnz L_82c
        mov eax, dword ptr [eax]
        xor eax, 0x85739531
        mov cl, byte ptr [eax+0x588]
        test cl, cl
        jnz L_82c
        xor eax, eax
        jmp L_831
    L_82c:
        mov eax, 1
    L_831:
        mov byte ptr [edi+0x64], al
    L_834:
        xor ecx, ecx
        mov cl, byte ptr [edi+0x16a]
        push ecx
        mov ecx, edi
        call FUN_00628d70
        xor edx, edx
        mov dl, byte ptr [edi+0x16d]
        mov ecx, edi
        push edx
        call FUN_00628c80
        xor eax, eax
        mov al, byte ptr [edi+0x16c]
        mov ecx, edi
        push eax
        call FUN_00628cc0
        xor ecx, ecx
        mov cl, byte ptr [edi+0x16f]
        push ecx
        mov ecx, edi
        call FUN_00628d00
        mov eax, dword ptr [edi+0x164]
        test eax, eax
        mov ecx, dword ptr [edi+0x15c]
        pop esi
        pop ebx
        jz L_88d
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0x14]
        jmp L_892
    L_88d:
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x10]
    L_892:
        mov al, byte ptr [edi+0x16b]
        test al, al
        mov ecx, edi
        jz L_8a5
        call FUN_00627a80
        pop edi
        ret
    L_8a5:
        call FUN_00627ad0
    L_8aa:
        pop edi
        ret
    }
}

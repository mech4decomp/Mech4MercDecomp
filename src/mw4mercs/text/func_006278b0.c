/* FUN_006278b0 - __thiscall, 334 bytes
   ABL interpreter region. Iterates a list of objects, calls virtual methods,
   and updates state fields. */
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_00628d30(void);
extern void __cdecl FUN_00628d70(void);
extern void __cdecl FUN_00628c80(void);
extern void __cdecl FUN_00628cc0(void);
extern void __cdecl FUN_00628d00(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void func_006278b0(void)
{
    __asm {
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ecx+0x2c]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x6b0]
        test eax, eax
        push edi
        jz L_946
        lea edi, [esi+0x44]
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        jz L_8eb
        mov ecx, edi
        call FUN_0041fcb0
    L_8eb:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [eax+0x2c]
        xor ecx, 0x85739531
        mov ecx, dword ptr [ecx+0x6b0]
        add ecx, 0x27c
        call FUN_0041fd80
        test eax, eax
        jz L_920
        push eax
        mov ecx, edi
        call FUN_0041fcd0
    L_920:
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [eax+0x2c]
        xor ecx, 0x85739531
        mov ecx, dword ptr [ecx+0x6b0]
        push 0
        call FUN_004c3d50
    L_946:
        mov edi, dword ptr [esi+0xf8]
        push ebx
        mov dword ptr [esi+0x3c], 1
        mov ebx, dword ptr [esi+0xfc]
        cmp edi, ebx
        jz L_96c
    L_95e:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0x14]
        add edi, 4
        cmp edi, ebx
        jnz L_95e
    L_96c:
        mov ecx, dword ptr [esi+0x10c]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x10]
        mov ecx, dword ptr [esi+0x134]
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0x10]
        mov ecx, dword ptr [esi+0x110]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x10]
        xor ecx, ecx
        mov cl, byte ptr [esi+0x169]
        push ecx
        mov ecx, esi
        call FUN_00628d30
        xor edx, edx
        mov dl, byte ptr [esi+0x16a]
        mov ecx, esi
        push edx
        call FUN_00628d70
        xor eax, eax
        mov al, byte ptr [esi+0x16d]
        mov ecx, esi
        push eax
        call FUN_00628c80
        xor ecx, ecx
        mov cl, byte ptr [esi+0x16c]
        push ecx
        mov ecx, esi
        call FUN_00628cc0
        xor edx, edx
        mov dl, byte ptr [esi+0x16f]
        mov ecx, esi
        push edx
        call FUN_00628d00
        mov eax, dword ptr [esi+0x164]
        test eax, eax
        mov ecx, dword ptr [esi+0x15c]
        pop ebx
        jz L_9f6
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x14]
        pop edi
        pop esi
        ret
    L_9f6:
        mov edx, dword ptr [ecx]
        call dword ptr [edx+0x10]
        pop edi
        pop esi
        ret
    }
}

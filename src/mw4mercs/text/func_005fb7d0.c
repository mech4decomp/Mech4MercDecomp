/* FUN_005fb7d0 - __thiscall: if param_1 != g_76d598, store param_1 to
   this->field_3d0 and return; else iterate two object lists calling a
   virtual method (offset 0xb4) on each matching entry, then store param_1. */
extern int  __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int);
extern float g_76d598;
extern int g_7dab44;
extern int g_7dab40;
extern int g_7f268c;

__declspec(naked) void func_005fb7d0(void)
{
    __asm {
        push ecx
        fld dword ptr [esp + 0x8]
        push ebx
        fcomp dword ptr [g_76d598]
        push esi
        push edi
        mov dword ptr [esp + 0xc], ecx
        __emit 0xDF          /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz L_5fb8cb
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [eax]
        xor edx, dword ptr [g_7dab40]
        mov edi, dword ptr [edx + 0x10]
        xor edi, 0x85739531
        mov eax, dword ptr [edi + 0x1c]
        test eax, eax
        jle L_5fb857
        mov ebx, dword ptr [edi + 0x18]
        push ebp
        add ebx, 0x14
        mov ebp, eax
L_5fb813:
        mov ecx, dword ptr [ebx]
        call FUN_0041fd80
        mov esi, eax
        test esi, esi
        jz L_5fb84c
        mov eax, dword ptr [g_7f268c]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz L_5fb84c
        mov ecx, dword ptr [esi + 0x2fc]
        test ecx, ecx
        jz L_5fb84c
        mov edx, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x30]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0xb4]
L_5fb84c:
        add ebx, 0x1c
        dec ebp
        jnz L_5fb813
        mov ecx, dword ptr [esp + 0x10]
        pop ebp
L_5fb857:
        mov eax, dword ptr [edi + 0x7c]
        test eax, eax
        jle L_5fb8ba
        mov edi, dword ptr [edi + 0x78]
        add edi, 0x14
        mov ebx, eax
L_5fb866:
        mov ecx, dword ptr [edi]
        call FUN_0041fd80
        mov esi, eax
        test esi, esi
        jz L_5fb89f
        mov eax, dword ptr [g_7f268c]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz L_5fb89f
        mov ecx, dword ptr [esi + 0x2fc]
        test ecx, ecx
        jz L_5fb89f
        mov edx, dword ptr [esp + 0xc]
        mov edx, dword ptr [edx + 0x30]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0xb4]
L_5fb89f:
        add edi, 0x1c
        dec ebx
        jnz L_5fb866
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr [ecx + 0x3d0], eax
        pop ebx
        pop ecx
        ret 0x4
L_5fb8ba:
        mov edx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr [ecx + 0x3d0], edx
        pop ebx
        pop ecx
        ret 0x4
L_5fb8cb:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr [ecx + 0x3d0], eax
        pop ebx
        pop ecx
        ret 0x4
    }
}

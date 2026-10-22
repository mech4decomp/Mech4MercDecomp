/*
 * func_00507AA0 - 112 bytes
 * Calls vtable methods on an object, then sets up WorldSpaceVelocity/WorldSpaceAcceleration
 */
__declspec(naked) void func_00507AA0()
{
    

extern void __cdecl FUN_100501b5f(void);
extern void __cdecl FUN_10041213c(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_10041211e(void);
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x10]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x90
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call FUN_100501b5f
        mov     edx, [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, [edi + 4]
        mov     esi, eax
        lea     ebx, [esi + 0x60]
        push    0x008BD5E8
        mov     ecx, ebx
        mov     dword ptr [esi], 0x90
        call    FUN_00767430
        push    0
        push    ebx
        push    0x00775D40
        mov     ecx, edi
        call FUN_10041213c
        add     esi, 0x78
        push    0x008BD5E8
        mov     ecx, esi
        call    FUN_00767430
        push    0
        push    esi
        push    0x00775D28
        mov     ecx, edi
        call FUN_10041211e
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}

/*
 * FUN_005d4d60 (126 B) — __thiscall, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00416130(void *p);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_005d03f0(void);
extern void __stdcall FUN_005dd5f0(void);

__declspec(naked) void __stdcall FUN_005d4d60(void)
{
    

extern int DAT_0080daa4;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x1c4]
        mov     edx, dword ptr [esi]
        xor     edi, edi
        push    edi
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x184]
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, edi
        jz      L_4d90
        mov ecx, dword ptr [DAT_0080daa4]
        push    eax
        call    FUN_00416130
L_4d90:
        mov     eax, dword ptr [esi + 0x3d4]
        cmp     eax, edi
        jz      L_4da3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4da3:
        mov     ecx, esi
        call    FUN_005d03f0
        mov     ecx, esi
        mov     dword ptr [esi + 0x3d4], edi
        mov     dword ptr [esi + 0x470], edi
        mov     dword ptr [esi + 0x3d8], edi
        mov     dword ptr [esi + 0x3e8], edi
        mov     dword ptr [esi + 0x3e4], edi
        mov     dword ptr [esi + 0x3e0], edi
        mov     dword ptr [esi + 0x3dc], edi
        call    FUN_005dd5f0
        pop     edi
        pop     esi
        ret
    }


}

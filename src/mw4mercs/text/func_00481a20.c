/*
 * FUN_00481a20 (213 B) — __thiscall MLR object constructor/loader.
 * Calls FUN_00482050, sets vtable 0x76f9c8, and (for long names) loads
 * a string via FUN_00412a00, looks it up (FUN_0048fac0/FUN_0048f380),
 * allocates/constructs a 0x24-byte object (FUN_004084d0/FUN_00422ea0),
 * stores it at this+0x8c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6a0;
extern int g_007da848;
extern void __cdecl FUN_00482050(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00481a20(void)
{
    __asm {
        mov     eax, dword ptr [g_007da6a0]
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    edi
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_00482050
        cmp     edi, 7
        mov     dword ptr [esi], 0x76f9c8
        mov     dword ptr [esi+0x8c], 0
        jle     L_481aed
        lea     ecx, [esp+0x14]
        push    ecx
        push    ebx
        mov     dword ptr [esp+0x1c], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esp+0x1c]
        add     esp, 8
        test    edx, edx
        jz      L_481aed
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0x10], ecx
        jz      L_481ad4
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_481aa9
        mov     edx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov     edi, eax
L_481aa9:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_481ac1
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_481ac3
L_481ac1:
        xor     eax, eax
L_481ac3:
        inc     dword ptr [eax+8]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x8c], eax
        or      dword ptr [esi+0x78], 0x40
L_481ad4:
        test    edx, edx
        jz      L_481aed
        mov     cl, byte ptr [edx-1]
        lea     eax, [edx-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_481aed
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_481aed:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }
}

/*
 * FUN_00458250 (150 B) — MLR_I_TMesh static init: registers type name,
 * allocates/constructs the 0x18-byte singleton (vtable 0x4585c0) and the
 * 0x400-byte buffer object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007d9900;
extern int g_007d98f8;
extern int g_007da5fc;
extern int g_007d98fc;

extern void * __cdecl FUN_006f4710(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00458250(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76ec18
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d9900], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_5829c
        mov     ecx, dword ptr [g_007da5fc]
        push    ecx
        push    0x76ebf8
        push    0x63
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x4585c0
        mov     dword ptr [g_007d98f8], esi
        jmp     L_582a6
L_5829c:
        mov     dword ptr [g_007d98f8], 0x0
L_582a6:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_582da
        push    0x400
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi+0x4], 0x400
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007d98fc], esi
        pop     esi
        ret
L_582da:
        mov     dword ptr [g_007d98fc], 0x0
        pop     esi
        ret
    }
}

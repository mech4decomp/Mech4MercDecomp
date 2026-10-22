/*
 * FUN_00490bb0 (192 B) — MLR texture-instance constructor (__thiscall,
 * RET 0x8). Sets vtable, builds a name string (refcounted), and constructs
 * the texture object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00490660(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040dca0(void);
extern int g_007700a8;

__declspec(naked) void FUN_00490bb0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_00490660
        mov     eax, dword ptr [esp + 0xc]
        lea     edi, [esi + 0x18]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], offset g_007700a8
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jz      L_noarg
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      L_skip_inc
        inc     byte ptr [eax - 1]
        mov     eax, dword ptr [esp + 0xc]
    L_skip_inc:
        push    ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_alloc
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_alloc:
        push    0x50
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_zero
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    0
        push    ecx
        mov     ecx, eax
        call    FUN_0040dca0
        jmp     L_store
    L_zero:
        xor     eax, eax
    L_store:
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    L_noarg:
        mov     dword ptr [esi + 0x1c], 0
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}

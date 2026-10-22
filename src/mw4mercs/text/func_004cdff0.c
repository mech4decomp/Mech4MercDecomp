/*
 * FUN_004cdff0 (416 B) — MLR subsystem: __thiscall routine that iterates
 * the per-type table [this+0x1818], serializes each live slot via a
 * stream vtable (offset 0x24), updates global hash bookkeeping
 * (0x7dab40/0x7dab44), and calls FUN_004ce190. Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db090;
extern int g_007dab44;
extern int g_007dab40;

extern void FUN_0041ee70(void);
extern void FUN_00412570(void);
extern void FUN_00412a50(void);
extern void FUN_004084e0(void);
extern void FUN_004ce190(void);
extern void FUN_0041ef60(void);

__declspec(naked) void FUN_004cdff0(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     byte ptr [esp+0x14], 1
L_4cdffe:
        mov     eax, dword ptr [esp+0x14]
        and     eax, 0xff
        mov     eax, dword ptr [edi+eax*4+0x1818]
        test    eax, eax
        jz      L_4ce176
        cmp     eax, dword ptr [g_007db090]
        jz      L_4ce176
        mov     eax, dword ptr [edi+0x1800]
        lea     esi, [edi+0x1800]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        __emit 0x8D  /* __emit: lea edx,[ecx*4+4] no-base SIB (8D 14 8D); MSVC6 re-bases via ebx */
        __emit 0x14
        __emit 0x8D
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        lea     ecx, [esp+0x24]
        call    FUN_0041ee70
        mov     eax, dword ptr [esp+0x20]
        push    4
        push    esi
        lea     ecx, [esp+0x28]
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [esp+0x20]
        push    4
        lea     ecx, [edi+0x1804]
        push    ecx
        lea     ecx, [esp+0x28]
        call    dword ptr [edx+0x24]
        lea     ebx, [edi+0x181c]
        mov     ebp, 0xfe
L_4ce073:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_4ce0e5
        mov     al, byte ptr [esi+0x28]
        mov     edx, dword ptr [esp+0x20]
        push    1
        lea     ecx, [esp+0x17]
        push    ecx
        lea     ecx, [esp+0x28]
        mov     byte ptr [esp+0x1b], al
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esi+0x2c]
        mov     edx, dword ptr [esp+0x20]
        push    4
        lea     ecx, [esp+0x20]
        push    ecx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x24], eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esi+0x30]
        push    eax
        lea     ecx, [esp+0x1c]
        call    FUN_00412570
        lea     ecx, [esp+0x18]
        push    ecx
        lea     edx, [esp+0x24]
        push    edx
        call    FUN_00412a50
        mov     eax, dword ptr [esp+0x20]
        add     esp, 8
        test    eax, eax
        jz      L_4ce0e5
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4ce0e5
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4ce0e5:
        add     ebx, 4
        dec     ebp
        jnz     L_4ce073
        mov     edx, dword ptr [esp+0x20]
        push    1
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0x28]
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0x20]
        push    0
        lea     ecx, [esp+0x24]
        call    dword ptr [eax+0xc]
        mov     edx, dword ptr [g_007dab44]
        mov     ebp, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x28], 0xffffffec
        mov     eax, dword ptr [edx]
        xor     eax, ebp
        mov     edx, dword ptr [eax+0x14]
        and     ecx, 0xff
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        mov     edx, dword ptr [eax+ecx*4+0x3c44]
        add     eax, 0x3c3c
        inc     edx
        mov     dword ptr [eax+ecx*4+8], edx
        inc     dword ptr [eax+0xc00]
        mov     ecx, dword ptr [esp+0x14]
        push    1
        lea     eax, [esp+0x24]
        push    eax
        and     ecx, 0xff
        push    9
        push    ecx
        mov     ecx, edi
        call    FUN_004ce190
        lea     ecx, [esp+0x20]
        call    FUN_0041ef60
L_4ce176:
        mov     al, byte ptr [esp+0x14]
        inc     al
        cmp     al, 0xff
        mov     byte ptr [esp+0x14], al
        jc      L_4cdffe
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}

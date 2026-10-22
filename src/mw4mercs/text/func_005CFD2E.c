/*
 * FUN_005CFD2E (175 B) — copies two 12-byte vectors into the object and
 * computes a float result via a helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b220c;
extern float g_76c5b0;
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void FUN_005CFD2E(void)
{
    __asm {
        nop
        nop
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [ecx]
        lea     eax, [esi+0x390]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx+8]
        mov     dword ptr [eax+8], ecx
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [eax+4], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi+0x39c], edx
        mov     edx, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx+8]
        mov     dword ptr [esi+0x3a0], edx
        mov     edx, dword ptr [g_7b220c]
        mov     dword ptr [esi+0x3a4], ecx
        push    edx
        lea     ecx, [esp+8]
        push    ecx
        push    eax
        mov     dword ptr [esp+0x10], 0xbf800000
        mov     dword ptr [esp+0x14], 0xbf800000
        mov     dword ptr [esp+0x18], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        je      L_fda7
        fld     dword ptr [g_76c5b0]
        jmp     L_fdab
    L_fda7:
        fld     dword ptr [esp+0x18]
    L_fdab:
        fst     dword ptr [esi+0x3ac]
        fld     dword ptr [esp+0x20]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        je      L_fdd1
        mov     edx, dword ptr [esp+0x20]
        /* __emit: MSVC6 encodes fstp st(0) differently; ref needs DD D8 */
        __emit 0xDD
        __emit 0xD8
        mov     dword ptr [esi+0x3b4], edx
        pop     esi
        add     esp, 0xc
        ret     0x10
    L_fdd1:
        fstp    dword ptr [esi+0x3b4]
        pop     esi
        add     esp, 0xc
        ret     0x10
    }
}

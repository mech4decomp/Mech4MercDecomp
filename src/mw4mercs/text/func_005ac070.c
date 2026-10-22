/*
 * FUN_005ac070 (208 B) — __thiscall update method, RET 4 (one float param).
 *
 * Calls FUN_005abdb0() with an obfuscated global-derived arg; if it returns 1,
 * applies a clamped float accumulation to this->field_4c and sets this->field_24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_005abdb0(void *p);

__declspec(naked) void __stdcall FUN_005ac070(void *param)
{
    extern int DAT_007dab44;
    extern int DAT_007dab40;
    extern float DAT_0076c5b0;
    extern float DAT_0076f5d8;
    __asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    esi
        mov     esi, ecx
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        push    edx
        call    FUN_005abdb0
        mov     ebx, 0x1
        add     esp, 0x4
        cmp     al, bl
        jnz     L138
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 swaps operands of test bl,ah -> test ah,bl (84 DC), need 84 E3 */
        __emit 0x84
        __emit 0xE3
        jz      L0EB
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x20]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [eax + 0x114]
        mov     eax, dword ptr [esi + 0xa0]
        fmul    dword ptr [eax + 0x990]
        fstp    dword ptr [esp + 0xc]
L0EB:
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x4c]
        fst     dword ptr [esp + 0xc]
        fst     dword ptr [esi + 0x4c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L115
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x4c], 0x0
        pop     esi
        pop     ebx
        ret     4
L115:
        fld     dword ptr [esi + 0x50]
        fmul    dword ptr [DAT_0076f5d8]
        fld     dword ptr [esp + 0xc]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L136
        mov     dword ptr [esi + 0x24], ebx
        fstp    dword ptr [esi + 0x4c]
        pop     esi
        pop     ebx
        ret     4
L136:
        fstp    st(0)
L138:
        mov     dword ptr [esi + 0x24], ebx
        pop     esi
        pop     ebx
        ret     4
    }
}

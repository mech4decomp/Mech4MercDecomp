/*
 * FUN_005cb000 (368 B) — __fastcall (ECX = this). Reads a set of
 * configuration values (FUN_005dbe50 / FUN_00637b40 / FUN_00637a20),
 * checks a flag via FUN_00415230, computes a float via FUN_005c9210 and
 * stores a clamped result into this+0x654.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005c9210(void);

__declspec(naked) void __fastcall FUN_005cb000(void)
{
    

extern int DAT_007f1f84;
extern int DAT_0076d3c8;
extern int DAT_0076d5f4;
extern int DAT_0076d598;
extern int DAT_0076d064;
__asm {
push    ecx
        push    esi
        mov     esi, ecx
        call    FUN_005dbe50
        mov     dword ptr [esp + 4], eax
        fild    dword ptr [esp + 4]
        push    0x4e
        fstp    dword ptr [esp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jz      L163
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [esp + 4], eax
        fild    dword ptr [esp + 4]
        push    0x4f
        fstp    dword ptr [esp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L163
        fld     dword ptr [esi + 0x1bc]
        push    0x50
        fstp    dword ptr [esp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jz      L163
        fld     dword ptr [esi + 0x1bc]
        push    0x51
        fstp    dword ptr [esp + 8]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L163
        mov eax, dword ptr [DAT_007f1f84]
        push    eax
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      L163
        push    0x1
        push    0x3f400000
        push    0x0
        push    0x0
        mov     ecx, esi
        call    FUN_005c9210
        fstp    dword ptr [esp + 4]
        push    0x0
        push    0x3f400000
        push    0x1
        push    0x1
        mov     ecx, esi
        call    FUN_005c9210
        fadd    dword ptr [esp + 4]
        fst     dword ptr [esp + 4]
        fcomp dword ptr [DAT_0076d3c8]
        fnstsw  ax
        test    ah, 0x1
        jz      L11A
        fld     dword ptr [esp + 4]
        fcomp dword ptr [DAT_0076d5f4]
        fnstsw  ax
        test    ah, 0x41
        jz      L163
L11A:
        fld     dword ptr [esp + 4]
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x1
        jz      L138
        mov     dword ptr [esi + 0x654], 0xbf800000
        pop     esi
        pop     ecx
        ret
L138:
        fld     dword ptr [esp + 4]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L156
        mov     dword ptr [esi + 0x654], 0x3f800000
        pop     esi
        pop     ecx
        ret
L156:
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x654], ecx
        pop     esi
        pop     ecx
        ret
L163:
        mov     dword ptr [esi + 0x654], 0
        pop     esi
        pop     ecx
        ret
    }


}

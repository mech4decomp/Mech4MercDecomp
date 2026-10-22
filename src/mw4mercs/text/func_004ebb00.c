/*
 * FUN_004ebb00 (97 B) — __thiscall. SpatializedChannel update: dispatches on
 * the channel type (FUN_007242d0), optionally re-arms via FUN_00725080, runs
 * the tile callback FUN_004ebb70, then bounds-checks the volume field
 * [ESI+0x58] against [ECX+0x38]/[ECX+0x44]; out of range triggers
 * FUN_004ec2e0. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_007242d0(int);
extern void __cdecl FUN_00725080(int, int);
extern void __cdecl FUN_004ebb70(void);
extern void __cdecl FUN_004ec2e0(void);

__declspec(naked) void FUN_004ebb00(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0x18]
        push    edi
        call    FUN_007242d0
        sub     eax, 0x2
        jz      L_done
        sub     eax, 0x2
        jnz     L_cont
        cmp     dword ptr [esi + 0x24], 0x1
        jnz     L_vcall
        push    0x1
        push    edi
        call    FUN_00725080
L_cont:
        mov     ecx, esi
        call    FUN_004ebb70
        fld     dword ptr [esi + 0x58]
        mov     ecx, dword ptr [esi + 0x14]
        fcomp   dword ptr [ecx + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_out
        fld     dword ptr [esi + 0x58]
        fcomp   dword ptr [ecx + 0x44]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_done
L_out:
        mov     ecx, esi
        call    FUN_004ec2e0
        pop     edi
        pop     esi
        ret     0x8
L_vcall:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
L_done:
        pop     edi
        pop     esi
        ret     0x8
    }
}

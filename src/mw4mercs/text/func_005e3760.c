/*
 * FUN_005e3760 (156 B) — __thiscall update routine with FPU comparisons.
 *
 * Calls virtual method at [this+0x78]+4, checks a state field, performs
 * FPU range checks, conditionally calls FUN_005f07c0 / FUN_00559be0,
 * sets a flag, then calls FUN_005e6e00(this, p1, p2).
 *
 * __thiscall (ECX = this), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f07c0(void *this);
extern void __fastcall FUN_00559be0(void *this);
extern void __fastcall FUN_005e6e00(void *this);

__declspec(naked) void __stdcall FUN_005e3760(void *this, void *p1, void *p2)
{
    

extern int DAT_00783768;
extern int DAT_0076d070;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi + 0xe0]
        mov     ecx, eax
        cmp     dword ptr [edx + 0x14], 0x7
        jnz     done
        fld     dword ptr [ecx + 0x6c]
        fcomp dword ptr [DAT_00783768]
        fnstsw  ax
        test    ah, 0x41
        jnz     done
        mov     al, byte ptr [esi + 0x180]
        test    al, al
        jnz     done
        fld     qword ptr [esp + 0x8]
        fsub    qword ptr [esi + 0xec]
        fld     dword ptr [ecx + 0x6c]
        fsub dword ptr [DAT_0076d070]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jz      done
        mov     ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        jz      setflag
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jz      setflag
        push    0x24
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
setflag:
        mov     byte ptr [esi + 0x180], 0x1
done:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005e6e00
        pop     esi
        ret     8
    }


}

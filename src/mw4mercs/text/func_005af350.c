/*
 * FUN_005af350 (123 B) — __thiscall with 2 stack params (RET 8; param_1 is a
 * double at [esp+8]). Conditionally updates a timestamp and flags, then calls
 * FUN_004dad70(this, param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __stdcall FUN_00707e70(int);
extern void __stdcall FUN_004dad70(void);

__declspec(naked) void __stdcall FUN_005af350(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x174]
        test    al, al
        jz      check
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x169]
        test    al, al
        jz      tail
check:
        fld     qword ptr [esp + 0x8]
        fsub    qword ptr [esi + 0xec]
        fcomp   dword ptr [esi + 0x170]
        fnstsw  ax
        test    ah, 0x41
        jz      do_update
        mov     al, byte ptr [esi + 0x177]
        test    al, al
        jz      tail
do_update:
        push    0x0
        mov     byte ptr [esi + 0x177], 0x1
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        or      dword ptr [esi + 0x10], 0x40
tail:
        mov     eax, dword ptr [esp + 0xC]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dad70
        pop     esi
        ret     8
    }


}

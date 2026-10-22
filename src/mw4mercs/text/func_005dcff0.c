/*
 * FUN_005DCFF0 (92 B) — Returns a pointer (or 0) based on a float comparison
 * against [this+0x1e0], an XOR-obfuscated global check, and a lookup via
 * FUN_004FCB30([this+0x1dc]).
 *
 * __thiscall (ECX = this), one stack param (double), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004FCB30(int v);

__declspec(naked) void __stdcall FUN_005DCFF0(double param)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        fld     dword ptr [ecx + 0x1e0]
        fcomp   qword ptr [esp + 4]
        fnstsw ax
        test    ah, 0x41
        jnz     L47
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x10]
        xor     edx, 0x85739531
        jz      L47
        mov     ecx, dword ptr [ecx + 0x1dc]
        cmp     ecx, -0x1
        jz      L47
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004FCB30
        test    eax, eax
        jz      L47
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jnz     L49
L47:
        xor     eax, eax
L49:
        ret     8
    }


}

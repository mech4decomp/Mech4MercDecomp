/*
 * FUN_005e67f0 (76 B) — __thiscall (ECX=this, RET 8, two params). If
 * bit 0x13 of [this+0x10] is clear, decodes an obfuscated vtable pointer
 * and dispatches a virtual call with (this+0x15c, this+0x14). Then calls
 * FUN_005e7c10(this, p1, p2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7c10(void);

__declspec(naked) void __stdcall FUN_005e67f0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L1
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x20]
        lea     edx, [esi + 0x14]
        push    edx
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        lea     edx, [esi + 0x15c]
        push    edx
        call    dword ptr [eax + 0xb0]
L1:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005e7c10
        pop     esi
        ret     0x8
    }


}

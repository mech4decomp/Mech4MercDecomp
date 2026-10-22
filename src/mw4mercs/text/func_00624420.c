/*
 * FUN_00624420 (101 B) - __thiscall (ECX = this).
 *
 * ABL interpreter region. If this[1]==0x2b and a global flag is set, returns
 * *this + (this[2]<0 ? FUN_00623500(this[2]) : FUN_006234b0(this+6)); else *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern void __cdecl FUN_00623500(void);
extern void __cdecl FUN_006234b0(void);

__declspec(naked) void FUN_00624420(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x4], 0x2b
        jnz     L_624481
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x16], 0x1
        jnz     L_624481
        mov     eax, dword ptr [eax + 0x20]
        mov     ecx, dword ptr [esi + 0x8]
        xor     eax, 0x85739531
        test    ecx, ecx
        jge     L_62446a
        push    ecx
        mov     ecx, dword ptr [eax + 0x225c]
        call    FUN_00623500
        mov     ecx, eax
        mov     eax, dword ptr [esi]
        add     eax, ecx
        pop     esi
        ret
L_62446a:
        mov     ecx, dword ptr [eax + 0x225c]
        lea     edx, [esi + 0x18]
        push    edx
        call    FUN_006234b0
        mov     ecx, eax
        mov     eax, dword ptr [esi]
        add     eax, ecx
        pop     esi
        ret
L_624481:
        mov     eax, dword ptr [esi]
        pop     esi
        ret
    }
}

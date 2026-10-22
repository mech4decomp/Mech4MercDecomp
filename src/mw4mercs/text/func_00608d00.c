/*
 * FUN_00608D00 (85 B) — If FUN_00608d60() is nonzero, calls FUN_00608d70,
 * invokes FUN_00615ff0 with a decoded pointer, calls FUN_00608710, and
 * returns 1; otherwise returns 0.
 *
 * __thiscall (ECX = this), RET (C3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern unsigned char __cdecl FUN_00608d60(void);
extern void __cdecl FUN_00608d70(void);
extern void __cdecl FUN_00615ff0(void *p, int a, int b);
extern void __cdecl FUN_00608710(void);

__declspec(naked) unsigned char __fastcall FUN_00608d00(void *this_)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        xor     bl, bl
        call    FUN_00608d60
        test    al, al
        jz      L_ret0
        mov     ecx, esi
        call    FUN_00608d70
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        lea     eax, [ecx + 0x44]
        push    0
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x6c]
        push    0
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_00615ff0
        mov     ecx, esi
        call    FUN_00608710
        pop     esi
        mov     al, 1
        pop     ebx
        ret
L_ret0:
        pop     esi
        mov     al, bl
        pop     ebx
        ret
    }
}

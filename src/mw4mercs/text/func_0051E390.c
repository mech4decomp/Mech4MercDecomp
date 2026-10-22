/*
 * FUN_0051E390 (173 B) — constructs an object via a lookup chain, allocates
 * and initializes it, then returns a handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_005937a0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0051E390(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        sub     esp, 0x44
        push    esi
        push    edi
        push    edx
        lea     ecx, [esp+0x5c]
        call    FUN_00412570
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx+0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x34]
        mov     edi, dword ptr [eax+0x48]
        push    1
        lea     ecx, [edi+0x34]
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_e3f3
        lea     edx, [esp+8]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     esi, eax
        jmp     L_e3f5
    L_e3f3:
        xor     esi, esi
    L_e3f5:
        mov     eax, dword ptr [edi+0x50]
        dec     eax
        mov     ecx, esi
        mov     dword ptr [esi+0x40], eax
        call    FUN_005937a0
        test    esi, esi
        mov     edi, eax
        je      L_e411
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
    L_e411:
        lea     ecx, [esp+8]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp+0x58]
        test    eax, eax
        je      L_e435
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_e435
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_e435:
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     0xc
    }
}

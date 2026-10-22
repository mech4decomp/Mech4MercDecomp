/*
 * FUN_005feb10 (928 B) — __thiscall destructor/teardown.
 *
 * Sets vtable, calls FUN_0061acf0/FUN_0061ad30, does some encrypted
 * pointer bookkeeping, then tears down a large set of member objects
 * (virtual destructor calls, FUN_004084e0 frees, FUN_004179f0/80
 * destructors, and reverse constructor loops for the arrays built in
 * FUN_005fe060). Ends with FUN_004f78f0() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0061acf0(void);
extern void FUN_0061ad30(void);
extern void FUN_004f93b0(void);
extern void FUN_005e80f0(void);
extern void FUN_00647400(void);
extern void FUN_00637b10(void);
extern void FUN_00694640(void);
extern void FUN_00676050(void);
extern void FUN_005d9e50(void);
extern void FUN_0064c620(void);
extern void __stdcall FUN_004084e0(void *p);
extern void FUN_00659e40(void);
extern void FUN_005dd2c0(void);
extern void FUN_00563460(void);
extern void FUN_004179f0(void);
extern void FUN_0065d400(void);
extern void FUN_00417980(void);
extern void FUN_006957d0(void);
extern void FUN_00602e40(void);
extern void FUN_00602f00(void);
extern void FUN_0060ffd0(void);
extern void FUN_00603170(void);
extern void FUN_004169c0(void);
extern void FUN_004f78f0(void);
extern void FUN_006214a0(void);

extern char g_007f20cc;
extern int g_007dab44;
extern int g_007dab40;
extern int g_007f2440;
extern int g_007f2438;

__declspec(naked) void __fastcall FUN_005feb10(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    1
        push    0xffff
        mov     dword ptr [esi], 0x78b268
        mov     byte ptr [g_007f20cc], 0
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad30
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x18]
        xor     ecx, 0x85739531
        jz      L_ebb8
        mov     edx, dword ptr [eax + 0x18]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x170]
        xor     ebx, ebx
        cmp     ecx, ebx
        jz      L_ebba
        mov     eax, dword ptr [eax + 0x18]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x170]
        add     ecx, 0x14
        push    ecx
        mov     ecx, esi
        call    FUN_004f93b0
        cmp     eax, ebx
        jz      L_ebba
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [edx]
        mov     ebp, dword ptr [g_007dab40]
        mov     edi, dword ptr [eax + 0x18]
        xor     ecx, ebp
        mov     edx, dword ptr [ecx + 0xc]
        add     ecx, 0xc
        mov     ecx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0xbc], edi
        mov     edx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     dword ptr [ecx + 0xb8], edx
        jmp     L_ebba
L_ebb8:
        xor     ebx, ebx
L_ebba:
        call    FUN_005e80f0
        call    FUN_00647400
        call    FUN_00637b10
        call    FUN_00694640
        call    FUN_00676050
        mov     ecx, dword ptr [g_007f2440]
        cmp     ecx, ebx
        jz      L_ebe9
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [g_007f2440], ebx
L_ebe9:
        mov     ecx, dword ptr [g_007f2438]
        call    FUN_005d9e50
        mov     edi, dword ptr [esi + 0x27c]
        cmp     edi, ebx
        jz      L_ec14
        mov     ecx, edi
        call    FUN_0064c620
        push    edi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x27c], ebx
L_ec14:
        call    FUN_00659e40
        call    FUN_005dd2c0
        call    FUN_00563460
        lea     ecx, [esi + 0x22ac]
        call    FUN_004179f0
        lea     ecx, [esi + 0x22b4]
        call    FUN_004179f0
        mov     ecx, dword ptr [esi + 0x22bc]
        cmp     ecx, ebx
        jz      L_ec49
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_ec49:
        mov     eax, dword ptr [esi + 0x2298]
        cmp     eax, ebx
        jle     L_ec6d
        mov     edi, dword ptr [esi + 0x2294]
        mov     ebp, eax
L_ec5b:
        mov     ecx, dword ptr [edi]
        cmp     ecx, ebx
        jz      L_ec67
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_ec67:
        add     edi, 4
        dec     ebp
        jnz     L_ec5b
L_ec6d:
        mov     eax, dword ptr [esi + 0x22c8]
        cmp     eax, ebx
        jle     L_ec91
        mov     edi, dword ptr [esi + 0x22c4]
        mov     ebp, eax
L_ec7f:
        mov     ecx, dword ptr [edi]
        cmp     ecx, ebx
        jz      L_ec8b
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_ec8b:
        add     edi, 4
        dec     ebp
        jnz     L_ec7f
L_ec91:
        cmp     dword ptr [esi + 0x22c8], ebx
        jz      L_ecb4
        mov     eax, dword ptr [esi + 0x22c4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x22c4], ebx
        mov     dword ptr [esi + 0x22c8], ebx
L_ecb4:
        mov     eax, dword ptr [esi + 0x22d0]
        cmp     eax, ebx
        jle     L_ecd8
        mov     edi, dword ptr [esi + 0x22cc]
        mov     ebp, eax
L_ecc6:
        mov     ecx, dword ptr [edi]
        cmp     ecx, ebx
        jz      L_ecd2
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_ecd2:
        add     edi, 4
        dec     ebp
        jnz     L_ecc6
L_ecd8:
        cmp     dword ptr [esi + 0x22d0], ebx
        jz      L_ecfb
        mov     eax, dword ptr [esi + 0x22cc]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x22cc], ebx
        mov     dword ptr [esi + 0x22d0], ebx
L_ecfb:
        cmp     dword ptr [esi + 0x22d8], ebx
        jz      L_ed1e
        mov     ecx, dword ptr [esi + 0x22d4]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x22d4], ebx
        mov     dword ptr [esi + 0x22d8], ebx
L_ed1e:
        mov     edi, dword ptr [esi + 0x225c]
        cmp     edi, ebx
        jz      L_ed38
        mov     ecx, edi
        call    FUN_006214a0
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_ed38:
        mov     dword ptr [esi + 0x225c], ebx
        lea     ebx, [esi + 0x280]
        mov     ecx, ebx
        call    FUN_004179f0
        lea     ecx, [esi + 0x288]
        call    FUN_004179f0
        lea     ecx, [esi + 0x22e0]
        call    FUN_0065d400
        mov     eax, dword ptr [esi + 0x22d4]
        test    eax, eax
        jz      L_ed74
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ed74:
        mov     eax, dword ptr [esi + 0x22cc]
        test    eax, eax
        jz      L_ed87
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ed87:
        mov     eax, dword ptr [esi + 0x22c4]
        test    eax, eax
        jz      L_ed9a
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ed9a:
        lea     ecx, [esi + 0x22b4]
        call    FUN_00417980
        lea     ecx, [esi + 0x22ac]
        call    FUN_00417980
        mov     eax, dword ptr [esi + 0x22a4]
        test    eax, eax
        jz      L_edc3
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_edc3:
        mov     eax, dword ptr [esi + 0x229c]
        test    eax, eax
        jz      L_edd6
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_edd6:
        mov     eax, dword ptr [esi + 0x2294]
        test    eax, eax
        jz      L_ede9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ede9:
        lea     ecx, [esi + 0x2250]
        call    FUN_00417980
        lea     ecx, [esi + 0x2228]
        call    FUN_006957d0
        lea     edi, [esi + 0x221c]
        mov     ecx, edi
        call    FUN_00602e40
        mov     edx, dword ptr [edi]
        push    1
        push    edx
        mov     ecx, edi
        call    FUN_00602f00
        lea     ecx, [esi + 0x21e8]
        call    FUN_0060ffd0
        lea     ecx, [esi + 0x21b8]
        call    FUN_0060ffd0
        lea     edi, [esi + 0x21b8]
        mov     ebp, 0x20
L_fee39:
        sub     edi, 0x30
        mov     ecx, edi
        call    FUN_0060ffd0
        dec     ebp
        jnz     L_fee39
        lea     edi, [esi + 0x1bb8]
        mov     ebp, 0x190
L_fee51:
        sub     edi, 8
        push    0
        push    edi
        mov     ecx, edi
        call    FUN_00603170
        dec     ebp
        jnz     L_fee51
        lea     edi, [esi + 0xf38]
        mov     ebp, 0x190
L_fee6c:
        sub     edi, 8
        push    0
        push    edi
        mov     ecx, edi
        call    FUN_00603170
        dec     ebp
        jnz     L_fee6c
        lea     ecx, [esi + 0x2a4]
        call    FUN_004169c0
        lea     ecx, [esi + 0x288]
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00417980
        lea     ecx, [esi + 0x1ec]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004f78f0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}

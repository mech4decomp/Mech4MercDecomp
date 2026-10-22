/*
 * FUN_004cea60 (182 B) — MLR subsystem: __thiscall destructor. Unregisters
 * from the global hash (0x7dab40/0x7dab44), tears down a linked list at
 * [this+0x14], frees a string buffer at [this+0x30], and calls
 * FUN_004cc150. Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void FUN_004ccb00(void);
extern void FUN_00417640(void);
extern void FUN_00417740(void);
extern void FUN_004176c0(void);
extern void FUN_004176a0(void);
extern void FUN_004084e0(void);
extern void FUN_004174f0(void);
extern void FUN_004cc150(void);

__declspec(naked) void FUN_004cea60(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x14]
        push    edi
        mov     dword ptr [esi], 0x771bac
        jz      L_4cea9d
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x28]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004ccb00
L_4cea9d:
        push    1
        lea     edi, [esi+0x14]
        push    edi
        lea     ecx, [esp+0x10]
        call    FUN_00417640
        lea     ecx, [esp+8]
        mov     dword ptr [esp+8], 0x771bd4
        call    FUN_00417740
        test    eax, eax
        jz      L_4ceadf
L_4ceac1:
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
        lea     ecx, [esp+8]
        call    FUN_004176c0
        lea     ecx, [esp+8]
        call    FUN_00417740
        test    eax, eax
        jnz     L_4ceac1
L_4ceadf:
        lea     ecx, [esp+8]
        call    FUN_004176a0
        mov     eax, dword ptr [esi+0x30]
        test    eax, eax
        jz      L_4ceb02
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4ceb02
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4ceb02:
        mov     ecx, edi
        call    FUN_004174f0
        mov     ecx, esi
        call    FUN_004cc150
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
    }
}

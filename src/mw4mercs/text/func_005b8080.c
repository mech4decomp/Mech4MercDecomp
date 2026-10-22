/*
 * FUN_005b8080 (144 B) — Constructor. Calls FUN_00707e70(0), stores the
 * returned double at this+0x18, then branches on param1:
 *   - param1 == 0: zero this+0x28/0x2C/0x30, call FUN_006290a0(0xF)
 *   - else: compare param2 (double) against 0x0076d970; if greater, store
 *     param2 at this+0x28/0x2C; set this+0x30=1, call FUN_00629290(0xF),
 *     then FUN_00679620(param1).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00707e70(void);
extern void FUN_006290a0(void);
extern void FUN_00629290(void);
extern void FUN_00679620(void);

__declspec(naked) void FUN_005b8080(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076d970;
__asm {
push    esi
        push    edi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
        mov     edi, dword ptr [esp + 0xC]
        test    edi, edi
        jnz     L_c2
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x40]
        mov     dword ptr [esi + 0x28], edi
        push    0xF
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x2C], edi
        mov     byte ptr [esi + 0x30], 0
        call    FUN_006290a0
        pop     edi
        pop     esi
        ret     0xC
L_c2:
        fld     qword ptr [esp + 0x10]
        fcomp qword ptr [DAT_0076d970]
        fnstsw ax
        test    ah, 0x41
        jnz     L_e1
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2C], eax
L_e1:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        push    0xF
        xor     ecx, 0x85739531
        mov     byte ptr [esi + 0x30], 1
        call    FUN_00629290
        push    edi
        mov     ecx, eax
        call    FUN_00679620
        pop     edi
        pop     esi
        ret     0xC
    }


}

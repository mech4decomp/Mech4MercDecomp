/*
 * FUN_00701350 (179 B) — __stdcall (RET 0x8, 2 args) device/format query.
 *
 * Reads a struct at [esp+8]: byte[4] flag, dword[8] type, dword[0x20]
 * and dword[0x24] values. Sets global DAT_0085686c / DAT_00856868 based
 * on the type/value and returns a status code in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85686c;   /* DAT_0085686c */
extern int g_856868;   /* DAT_00856868 */

__declspec(naked) int __stdcall FUN_00701350(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     al, byte ptr [ecx + 0x4]
        test    al, al
        mov     edx, dword ptr [ecx + 0x8]
        jz      ret_c1120008
        sub     edx, 0x2200
        mov     eax, dword ptr [ecx + 0x20]
        jz      type_2200
        sub     edx, 0x2
        jnz     ret_zero
        test    eax, eax
        jnz     chk_c1121000
        mov     dword ptr [g_85686c], 0x2
        ret     0x8
ret_c1120008:
        mov     eax, 0xc1120008
        ret     0x8
chk_c1121000:
        cmp     eax, 0xc1121000
        jnz     chk_c1120005
        mov     dword ptr [g_85686c], 0x8
        xor     eax, eax
        ret     0x8
chk_c1120005:
        cmp     eax, 0xc1120005
        jnz     chk_neg
        mov     dword ptr [g_85686c], 0x4
        xor     eax, eax
        ret     0x8
chk_neg:
        test    eax, eax
        jge     ret_zero
        mov     dword ptr [g_85686c], 0x4
        xor     eax, eax
        ret     0x8
type_2200:
        test    eax, eax
        mov     ecx, dword ptr [ecx + 0x24]
        mov     edx, 0x4
        jnz     chk_c1121007
        mov     dword ptr [g_856868], 0x2
        jmp     cmp_ecx
chk_c1121007:
        cmp     eax, 0xc1121007
        jz      set_856868
        test    eax, eax
        jge     cmp_ecx
set_856868:
        mov     dword ptr [g_856868], edx
cmp_ecx:
        cmp     ecx, 0x1
        jnz     ret_zero
        mov     dword ptr [g_856868], edx
ret_zero:
        xor     eax, eax
        ret     0x8
    }
}

/* FUN_00590610 - __thiscall, 80 bytes */
/* Calls a virtual method on this+0x78, then conditionally calls FUN_005fa480 */

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern void __stdcall FUN_005fa480(void);

__declspec(naked) void FUN_00590610(void)
{
    __asm {
        push    esi
        mov     esi, ecx               /* esi = this */
        mov     eax, [esi + 0x78]      /* eax = this->field_78 (vtable ptr?) */
        lea     ecx, [esi + 0x78]      /* ecx = &this->field_78 */
        push    edi
        xor     edi, edi               /* edi = 0 (return value) */
        call    dword ptr [eax + 4]    /* call vtable[1] on field_78 object */
        mov     ecx, [esp + 0x0C]      /* ecx = param_2 */
        test    ecx, ecx
        jz      ret_zero               /* if param_2 == 0, return 0 */
        mov     dx, [eax + 0x64C]      /* dx = result->field_64c (short) */
        add     eax, 0x64C             /* eax = &result->field_64c */
        cmp     dx, word ptr [DAT_007db0ac]
        jnz     do_call
        mov     dx, [eax + 2]          /* dx = result->field_64e (short) */
        cmp     dx, word ptr [DAT_007db0ae]
        jz      ret_zero               /* if both shorts match, return 0 */

do_call:
        push    1
        push    ecx                    /* param_2 */
        push    eax                    /* &result->field_64c */
        mov     ecx, esi               /* this */
        call    FUN_005fa480
        pop     edi
        pop     esi
        ret     4

ret_zero:
        mov     eax, edi               /* return 0 */
        pop     edi
        pop     esi
        ret     4
    }
}

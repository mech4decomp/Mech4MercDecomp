/*
 * FUN_00502EF0 (129 B) — string/ID lookup function
 *
 * CFLAGS: /O1
 */
extern void __cdecl FUN_004d1f80(void);
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void func_00502ef0(void)
{
    __asm {
        mov     eax, [esp+0x08]
        sub     esp, 0x44
        push    0x01
        push    eax
        lea     ecx, [esp+0x08]
        call    FUN_004d1f80
        /* __emit: MSVC6 drops 0 displacement for [esp+0x00] */
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        push    0x01
        lea     ecx, [esp+0x50]
        push    ecx
        lea     ecx, [esp+0x08]
        call    dword ptr [edx+0x20]
        mov     eax, [esp+0x50]
        /* __emit: MSVC6 uses 3A (cmp al, r/m8) instead of 38 (cmp r/m8, al) */
        __asm _emit 0x38
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        ja      use_table

        mov     eax, [esp+0x48]
        mov cx, word ptr [DAT_007db0ac]
        mov dx, word ptr [DAT_007db0ae]
        mov     [eax], cx
        /* __emit: MSVC6 drops 0 displacement for [esp+0x00] */
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        mov     [eax+0x02], dx
        call    FUN_004d21c0
        add     esp, 0x44
        ret

    use_table:
        mov     ecx, [esp+0x14]
        and     eax, 0x000000FF
        mov     dx, word ptr [ecx+eax*4]
        lea     eax, [ecx+eax*4]
        mov     ecx, [esp+0x48]
        mov     ax, [eax+0x02]
        mov     [ecx], dx
        mov     [ecx+0x02], ax
        /* __emit: MSVC6 drops 0 displacement for [esp+0x00] */
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x00
        call    FUN_004d21c0
        add     esp, 0x44
        ret
    }
}

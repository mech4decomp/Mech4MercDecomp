/*
 * FUN_00493A70 (92 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Traverses a linked list at this+0x10, comparing param_1+0x10 float
 * against each node's float. Inserts via FUN_00417b00 if less,
 * otherwise appends via FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00493a70(void)
{
    __asm {
        sub     esp, 0xc
        mov     edx, dword ptr [ecx + 0x10]
        add     ecx, 0x10
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 8], ecx
        mov     dword ptr [esp + 0xc], edx
        _emit 0xC7  /* mov dword ptr [esp + 4], 0x77011c */
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x1C
        _emit 0x01
        _emit 0x77
        _emit 0x00
l_check:
        test    edx, edx
        jz      l_append
l_loop:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      l_append
        fld     dword ptr [eax + 0x10]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      l_insert
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [esp + 0xc], edx
        jmp     l_check
l_insert:
        push    esi
        lea     ecx, [esp + 8]
        _emit 0xE8  /* call FUN_00417b00 */
        _emit 0x48
        _emit 0x40
        _emit 0xF8
        _emit 0xFF
        pop     esi
        add     esp, 0xc
        ret     4
l_append:
        push    esi
        _emit 0xE8  /* call FUN_004179b0 */
        _emit 0xEB
        _emit 0x3E
        _emit 0xF8
        _emit 0xFF
        pop     esi
        add     esp, 0xc
        ret     4
    }
}

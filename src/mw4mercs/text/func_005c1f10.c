/*
 * FUN_005c1f10 (112 B) — __fastcall (ECX = this).
 *
 * Iterates a float array [this+0x604, this+0x608). For each element,
 * if (_DAT_00787930 + *p) < FUN_00707e70(0), removes that element by
 * shifting the tail left and decrements the end pointer. Repeats until
 * the start pointer reaches the end.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1f10(int param_1)
{
    

extern int DAT_00787930;
extern void __cdecl FUN_00707e4e(void);
__asm {
push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx + 0x604]
        push    edi
    l_f1d:
        mov     edi, dword ptr [ebx + 0x608]
        mov     esi, ebp
    l_f25:
        cmp     esi, edi
        jz      l_f7a
        fld dword ptr [DAT_00787930]
        push    0x0
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x14]
        call FUN_00707e4e
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      l_f4c
        add     esi, 0x4
        jmp     l_f25
    l_f4c:
        mov     edx, dword ptr [ebx + 0x608]
        lea     ecx, [esi + 0x4]
        cmp     ecx, edx
        jz      l_f6f
        mov     eax, edx
        sub     eax, ecx
        sar     eax, 0x2
        test    eax, eax
        jle     l_f6f
    l_f64:
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [esi], ecx
        add     esi, 0x4
        dec     eax
        jnz     l_f64
    l_f6f:
        add     edx, -0x4
        mov     dword ptr [ebx + 0x608], edx
        jmp     l_f1d
    l_f7a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }


}

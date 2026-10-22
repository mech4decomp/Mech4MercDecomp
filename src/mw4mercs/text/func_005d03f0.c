/*
 * FUN_005d03f0 (92 B) - __thiscall (ECX = this), plain RET.
 *
 * Iterates a pointer array at this+0x4b0..this+0x4b4, calling
 * FUN_00416130 (this=[0x0080daa4]) on each non-null element, then resets
 * this+0x4b4 = this+0x4b0. The trailing copy loop (0x5d0435) is dead code
 * (ECX = EAX-EAX = 0, always JLE to 0x5d0442) but is transcribed verbatim.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416130(void *p);

__declspec(naked) void __stdcall FUN_005d03f0(void)
{
    

extern int DAT_0080daa4;
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x4b0]
        mov     ebx, dword ptr [edi + 0x4b4]
        cmp     esi, ebx
        jz      loc_5d041e
loc_5d0405:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      loc_5d0417
        mov ecx, dword ptr [DAT_0080daa4]
        push    eax
        call    FUN_00416130
loc_5d0417:
        add     esi, 4
        cmp     esi, ebx
        jnz     loc_5d0405
loc_5d041e:
        mov     eax, dword ptr [edi + 0x4b4]
        mov     edx, dword ptr [edi + 0x4b0]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     loc_5d0442
loc_5d0435:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     loc_5d0435
loc_5d0442:
        mov     dword ptr [edi + 0x4b4], edx
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}

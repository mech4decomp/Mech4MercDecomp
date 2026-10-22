/*
 * FUN_005d0740 (164 B) - __thiscall (ECX = this), plain RET.
 *
 * Calls FUN_005d03f0 (cleanup), then walks the linked list at this+0x4cc
 * back to this+0x4c8, writing each record's 16-bit value into a heightmap
 * buffer (via DAT_007f2440+0x3c->+8) and freeing the record via
 * FUN_00416130 (this=[0x0080daa8]). Resets this+0x4cc = this+0x4c8.
 * The trailing copy loop (0x5d07cd) is dead code (ECX = EAX-EAX = 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005d03f0(void);
extern void FUN_00416130(void *p);

__declspec(naked) void __stdcall FUN_005d0740(void)
{
    

extern int DAT_007f2440;
extern int DAT_0080daa8;
__asm {
push    ebx
        mov     ebx, ecx
        call    FUN_005d03f0
        mov     eax, dword ptr [ebx + 0x4cc]
        mov     edx, dword ptr [ebx + 0x4c8]
        sub     eax, edx
        test    eax, 0xfffffffc
        jz      loc_5d07e2
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx + 0x4cc]
        sub     esi, 4
        mov     ebp, edx
        cmp     esi, ebp
        jz      loc_5d07b6
        push    edi
loc_5d0773:
        mov ecx, dword ptr [DAT_007f2440]
        mov     edi, dword ptr [ecx + 0x3c]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 4]
        mov     edx, dword ptr [ecx]
        add     eax, 0x100
        add     edx, 0x100
        shl     eax, 9
        add     eax, edx
        test    ecx, ecx
        mov     edx, dword ptr [edi + 8]
        mov     di, word ptr [ecx + 8]
        mov     word ptr [edx + eax*2], di
        jz      loc_5d07ae
        push    ecx
        mov ecx, dword ptr [DAT_0080daa8]
        call    FUN_00416130
loc_5d07ae:
        sub     esi, 4
        cmp     esi, ebp
        jnz     loc_5d0773
        pop     edi
loc_5d07b6:
        mov     eax, dword ptr [ebx + 0x4cc]
        mov     edx, dword ptr [ebx + 0x4c8]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     loc_5d07da
loc_5d07cd:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     loc_5d07cd
loc_5d07da:
        pop     esi
        mov     dword ptr [ebx + 0x4cc], edx
        pop     ebp
loc_5d07e2:
        pop     ebx
        ret
    }


}

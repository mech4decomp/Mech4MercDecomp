/*
 * FUN_1003786E (104 B) - __cdecl, 2+ args. Installs an SEH frame with
 * handler FUN_1003784c, then walks a table: arg1 (eax) is a struct with
 * +8 = table base, +0xc = index. While index != -1 and != arg2, indexes
 * the table (index*3*4), updates the index, and if the slot's +4 is 0
 * calls FUN_10037902 then the slot's +8 function pointer. Tears the SEH
 * frame down and returns.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037902(void);   /* rel32 call, __stdcall RET 0x4 */

__declspec(naked) void __cdecl FUN_1003786E(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [esp+0x10]
        push    eax
        push    -2
        push    0x1003784c
        push    dword ptr fs:[0]
        mov     dword ptr fs:[0], esp
L_loop:
        mov     eax, dword ptr [esp+0x20]
        mov     ebx, dword ptr [eax+8]
        mov     esi, dword ptr [eax+0xc]
        cmp     esi, -1
        je      L_done
        cmp     esi, dword ptr [esp+0x24]
        je      L_done
        lea     esi, [esi+esi*2]
        mov     ecx, dword ptr [ebx+esi*4]
        mov     dword ptr [esp+8], ecx
        mov     dword ptr [eax+0xc], ecx
        cmp     dword ptr [ebx+esi*4+4], 0
        jne     L_back
        push    0x101
        mov     eax, dword ptr [ebx+esi*4+8]
        call    FUN_10037902
        call    dword ptr [ebx+esi*4+8]
L_back:
        jmp     L_loop
L_done:
        pop     dword ptr fs:[0]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}

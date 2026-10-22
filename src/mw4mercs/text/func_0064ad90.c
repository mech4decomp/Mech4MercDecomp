/*
 * FUN_0064ad90 (289 B) — __cdecl (1 stack arg), RET.
 *
 * ABL stack-heap library-instance registry grow/init. Saves param_1 to
 * DAT_0080d990, grows the registry vector via FUN_006f3c80 /
 * FUN_0061ef00, then zero-fills DAT_0080d98c entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_008058b8;
extern int DAT_0080d990;
extern int DAT_0080d98c;
extern char g_792af0[];              /* string literal " ABL: Unable to malloc ..." */
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);

__declspec(naked) void __stdcall FUN_0064ad90(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [DAT_008058b8]
        mov     dword ptr [DAT_0080d990], eax
        lea     ecx, [eax*4 + 0]
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        push    edi
        jz      L_noheap
        push    esi
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x18], eax
        jz      L_grow
        test    esi, esi
        jz      L_store
        mov     dword ptr [esi], eax
L_store:
        add     esi, 0x4
        mov     dword ptr [ebx + 0x14], esi
        pop     esi
        jmp     L_done
L_grow:
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0xc], 0x1
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0xc]
        jc      L_pick
        lea     ecx, [esp + 0x10]
L_pick:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        push    ebp
        mov     dword ptr [esp + 0x14], ecx
        jz      L_alloc0
        lea     eax, [ecx*4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_alloc_done
L_alloc0:
        xor     ebp, ebp
L_alloc_done:
        mov     ecx, dword ptr [esp + 0x1c]
        push    0x0
        push    ecx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    eax, eax
        jz      L_skip_store
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], edx
L_skip_store:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 0x4
        sar     ecx, 0x2
        test    ecx, ecx
        mov     edi, eax
        jle     L_copy_done
L_copy_loop:
        sub     esi, eax
L_copy_body:
        mov     eax, dword ptr [esi + edi*1]
        mov     dword ptr [edi], eax
        add     edi, 0x4
        dec     ecx
        jnz     L_copy_body
L_copy_done:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        jz      L_free_done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_free_done:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [ebp + ecx*4]
        mov     dword ptr [ebx + 0x10], ebp
        pop     ebp
        mov     dword ptr [ebx + 0x14], edi
        mov     dword ptr [ebx + 0x18], edx
        pop     esi
        jmp     L_done
L_noheap:
        xor     eax, eax
L_done:
        test    eax, eax
        mov     dword ptr [DAT_0080d98c], eax
        jnz     L_skip_msg
        push    offset g_792af0
        push    eax
        call    FUN_00562f10
        add     esp, 0x8
L_skip_msg:
        mov     ecx, dword ptr [DAT_0080d990]
        mov     edi, dword ptr [DAT_0080d98c]
        xor     eax, eax
        rep     stosd
        pop     edi
        pop     ebx
        add     esp, 0x8
        ret
    }
}

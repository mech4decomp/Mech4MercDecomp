/*
 * FUN_006c8a20 (188 B) — __thiscall (ECX = this), RET (no args).
 *
 * Destructor: sets the vtable pointer (0x79e21c), unlinks `this` from
 * the global list DAT_0082f350 (freeing nodes via IAT free), then frees
 * members at this+0x14/0x20/0x18 via FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f350;   /* DAT_0082f350 */
extern int g_82f354;   /* DAT_0082f354 */

extern int (__stdcall *g_76b2d0)(void);  /* IAT free */
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __fastcall FUN_006c8a20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_82f350]
        test    esi, esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x79e21c
        jz      cleanup
        cmp     dword ptr [esi + 0xc], edi
        mov     eax, dword ptr [esi + 0x4]
        jnz     find_node
        mov     edx, dword ptr [g_82f354]
        dec     edx
        mov     dword ptr [esi + 0x8], 0x0
        push    esi
        mov     dword ptr [g_82f350], eax
        mov     dword ptr [g_82f354], edx
        mov     dword ptr [esi], 0x0
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        jmp     cleanup
find_node:
        test    eax, eax
        jz      cleanup
find_loop:
        cmp     dword ptr [eax + 0xc], edi
        jz      unlink_node
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jnz     find_loop
        jmp     cleanup
unlink_node:
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      dec_count
        mov     dword ptr [ecx + 0x8], esi
dec_count:
        mov     edx, dword ptr [g_82f354]
        dec     edx
        push    eax
        mov     dword ptr [g_82f354], edx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
cleanup:
        mov     eax, dword ptr [edi + 0x14]
        test    eax, eax
        jz      free_20
        mov     cl, byte ptr [edi + 0x1e]
        test    cl, cl
        jnz     free_20
        push    eax
        call    FUN_006f4230
free_20:
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jz      free_18
        push    eax
        call    FUN_006f4230
free_18:
        mov     edi, dword ptr [edi + 0x18]
        test    edi, edi
        jz      done
        push    edi
        call    FUN_006f4230
done:
        pop     edi
        pop     esi
        ret
    }
}

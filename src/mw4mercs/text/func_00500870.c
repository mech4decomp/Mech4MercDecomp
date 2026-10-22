// Auto-generated: call free() twice via import thunk
// FUN_00500870, 29 bytes

/* IAT entry: free (0x0076B2D0) */
extern void *g_iat_76b2d0;

__declspec(naked) void func_00500870(void)
{
    __asm {
        push esi
        mov esi, [esp+8]    // esi = arg
        mov eax, [esi]      // eax = *arg
        push edi
        mov edi, dword ptr [g_iat_76b2d0]
        push eax
        call edi            // free(*arg)
        mov ecx, [esi+4]    // ecx = arg[4]
        push ecx
        call edi            // free(arg[4])
        add esp, 8
        pop edi
        pop esi
        ret
    }
}

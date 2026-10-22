// FUN_1000c3a0 (0x1000C3A0) __fastcall, 45 bytes
extern void __cdecl FUN_1000c290(void);
extern void *g_10049068;   // IAT slot 0x10049068
extern void *g_100491a4;   // IAT slot 0x100491a4

__declspec(naked) void __fastcall func_1000c3a0(void)
{
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x24]
        push edi
        call dword ptr [g_10049068]
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je done
again:
        mov esi, dword ptr [eax]
        push eax
        call FUN_1000c290
        test esi, esi
        mov eax, esi
        jne again
done:
        push edi
        call dword ptr [g_100491a4]
        pop edi
        pop esi
        ret
    }
}

extern void __cdecl FUN_0049aa70(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_0049aa50(void *this, int param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0049aa70
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}

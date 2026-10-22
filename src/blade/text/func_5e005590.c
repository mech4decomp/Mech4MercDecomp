/* auto-transcribed gap function 0x5E005590 (154 B); review against reference; stepping stone */
extern void __cdecl FUN_5e003950(void);
extern void __cdecl FUN_5e003960(void);
extern void __cdecl FUN_5e003970(void);
__declspec(naked) void FUN_5e005590(void)
{
    __asm {
            push esi
            mov esi, dword ptr [esp + 0x10]
            test esi, esi
            push edi
            __emit 0x74 /* je 0x5e005608: MSVC6 cannot encode natively */
            __emit 0x6e /* je 0x5e005608: MSVC6 cannot encode natively */
            mov eax, dword ptr [esp + 0x10]
            dec eax
            cmp eax, 5
            __emit 0x77 /* ja 0x5e005608: MSVC6 cannot encode natively */
            __emit 0x64 /* ja 0x5e005608: MSVC6 cannot encode natively */
            __emit 0xff /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x24 /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x85 /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x14 /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x56 /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x00 /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            __emit 0x5e /* jmp dword ptr [eax*4 + 0x5e005614]: MSVC6 cannot encode natively */
            mov eax, dword ptr [esp + 0xc]
            mov ecx, 0x10
            lea edi, [eax + 0x438c]
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            call FUN_5e003950
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
            mov eax, dword ptr [esp + 0xc]
            mov ecx, 0x10
            lea edi, [eax + 0x43cc]
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            call FUN_5e003960
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
            mov eax, dword ptr [esp + 0xc]
            mov ecx, 0x10
            lea edi, [eax + 0x440c]
            rep movsd
            __emit 0x8b /* mov ecx, eax: MSVC6 cannot encode natively */
            __emit 0xc8 /* mov ecx, eax: MSVC6 cannot encode natively */
            call FUN_5e003970
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
            pop edi
            mov eax, 0x80070057
            pop esi
            ret 0xc
            mov edi, edi
            __emit 0xab /* stosd dword ptr es:[edi], eax: MSVC6 cannot encode natively */
            __emit 0x55 /* push ebp: MSVC6 cannot encode natively */
            add byte ptr [esi - 0x36], bl
            push ebp
            add byte ptr [esi - 0x17], bl
            push ebp
            add byte ptr [esi - 0x3d], bl
            push ebp
            add byte ptr [esi - 0x3d], bl
            push ebp
            add byte ptr [esi - 0x3d], bl
            push ebp
    }
}

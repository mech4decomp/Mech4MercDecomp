/*
 * ZlogLib.dll - FUN_10001f4a (0x10001F4A, 100 B, __cdecl)
 * MD5 final: pads the message, appends the 8-byte length, and digests out.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern void __cdecl FUN_10002859(void);
extern void __cdecl FUN_10001eac(void);
extern void __cdecl FUN_10002902(void);
extern char g_100042a4;   /* padding byte string at 0x100042A4 */

__declspec(naked) void FUN_10001f4a(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0xc]
        push 0x8
        lea esi, [edi + 0x10]
        lea eax, [ebp - 0x8]
        push esi
        push eax
        call FUN_10002859
        mov eax, dword ptr [esi]
        add esp, 0xc
        shr eax, 0x3
        push 0x38
        and eax, 0x3f
        pop ecx
        cmp eax, ecx
        jc L1
        push 0x78
        pop ecx
L1:
        sub ecx, eax
        push ecx
        push offset g_100042a4
        push edi
        call FUN_10001eac
        push 0x8
        lea eax, [ebp - 0x8]
        push eax
        push edi
        call FUN_10001eac
        push 0x10
        push edi
        push dword ptr [ebp + 0x8]
        call FUN_10002859
        push 0x58
        push 0x0
        push edi
        call FUN_10002902
        add esp, 0x30
        pop edi
        pop esi
        leave
        ret
    }
}

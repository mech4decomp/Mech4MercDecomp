/* func_005a8cb0.c - inline-asm transcription of FUN_005a8cb0 (65 bytes) */

extern void __cdecl FUN_005ec110(int, int, int, int);
extern void __cdecl FUN_0041fc80(int);

__declspec(naked) void *func_005a8cb0(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x8]
        push esi
        push edi
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_005ec110
        lea edi, [esi + 0x234]
        push 0x0
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        pop edi
        mov dword ptr [esi], 0x785114
        mov eax, esi
        pop esi
        ret 0x10
    }
}

/*
 * FUN_005a0a00 (104 B) — Animation update with door/lift joint logic.
 * Calls FUN_005d5b50 and FUN_005a1640.
 *
 * __stdcall, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);
extern int __stdcall FUN_00415230(int param);
extern void __stdcall FUN_005d5b50(void);
extern void __stdcall FUN_005a1640(int param1, int param2);

__declspec(naked) void __stdcall FUN_005a0a00(void)
{
    

extern int DAT_007f23d8;
__asm {
push    esi
        push    edi
        mov     edi, ecx

        lea     esi, [edi + 0x518]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      call_final

        mov     ecx, esi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    0
        mov     ecx, eax
        call    dword ptr [edx + 0xb0]

        mov     ecx, esi
        call    FUN_0041fd80
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        jz      call_final

        mov eax, dword ptr [DAT_007f23d8]

        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      call_final

        mov     ecx, esi
        call    FUN_005d5b50

call_final:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x0c]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_005a1640

        pop     edi
        pop     esi
        ret     8
    }


}

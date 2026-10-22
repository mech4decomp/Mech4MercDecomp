/*
 * FUN_1001AFF0 (49 B) - __stdcall, RET 0x4.  String hash: for up to 16
 * chars, hash = hash*0x11 + char.  Returns 0 for null/empty string.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __stdcall FUN_1001AFF0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        push    esi
        xor     eax, eax
        test    edx, edx
        push    edi
        je      L_b01c
        mov     cl, byte ptr [edx]
        xor     esi, esi
        test    cl, cl
        je      L_b01c
    L_b004:
        mov     edi, esi
        inc     esi
        cmp     edi, 0x10
        jge     L_b01c
        imul    eax, eax, 0x11
        movsx   ecx, cl
        add     eax, ecx
        mov     cl, byte ptr [edx + 1]
        inc     edx
        test    cl, cl
        jne     L_b004
    L_b01c:
        pop     edi
        pop     esi
        ret     4
    }
}

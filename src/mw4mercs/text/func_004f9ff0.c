/*
 * FUN_004f9ff0 (108 B) — __thiscall text-field reset/init (RET 0x4).
 * Clears the 0x198 buffer (0x37 dwords + word), sets flags, and calls
 * FUN_004df200 / FUN_0072c090 / FUN_0072be60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6b4;
extern char g_007b4360;

extern void FUN_004df200(void);
extern void FUN_0072c090(int);
extern void FUN_0072be60(int);

__declspec(naked) void FUN_004f9ff0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     edx, ecx
        push    edi
        mov     byte ptr [edx + 0x169], al
        mov     dword ptr [edx + 0x16c], 0x0
        mov     byte ptr [edx + 0x168], 0x1
        mov     dword ptr [edx + 0x170], 0x0
        xor     eax, eax
        lea     edi, [edx + 0x198]
        mov     ecx, 0x37
        rep     stosd
        stosw
        mov     ecx, dword ptr [edx + 0x16c]
        mov     byte ptr [edx + ecx + 0x198], 0x0
        mov     ecx, dword ptr [g_007dc6b4]
        push    edx
        call    FUN_004df200
        push    0x1
        call    FUN_0072c090
        xor     edx, edx
        mov     dl, byte ptr [g_007b4360]
        push    edx
        call    FUN_0072be60
        pop     edi
        ret     0x4
    }
}

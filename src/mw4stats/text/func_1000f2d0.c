/*
 * FUN_1000f2d0 (366 B) - __thiscall. MD5 final: pads the message, appends the
 * bit count, computes the digest into param_1, then zeroes the context.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1000fd80(void);
extern void FUN_1000f210(void);

__declspec(naked) void FUN_1000f2d0(void)
{
    __asm {
        sub     esp, 0x48
        push    esi
        push    edi
        mov     edi, ecx
        xor     al, al
        mov     byte ptr [esp + 0x11], al
        mov     byte ptr [esp + 0x12], al
        mov     byte ptr [esp + 0x13], al
        mov     byte ptr [esp + 0x14], al
        mov     byte ptr [esp + 0x15], al
        mov     byte ptr [esp + 0x16], al
        mov     byte ptr [esp + 0x17], al
        mov     byte ptr [esp + 0x18], al
        mov     byte ptr [esp + 0x19], al
        mov     byte ptr [esp + 0x1a], al
        mov     byte ptr [esp + 0x1b], al
        mov     byte ptr [esp + 0x1c], al
        mov     byte ptr [esp + 0x1d], al
        mov     byte ptr [esp + 0x1e], al
        mov     byte ptr [esp + 0x1f], al
        mov     byte ptr [esp + 0x20], al
        mov     byte ptr [esp + 0x21], al
        mov     byte ptr [esp + 0x22], al
        mov     byte ptr [esp + 0x23], al
        mov     byte ptr [esp + 0x24], al
        mov     byte ptr [esp + 0x25], al
        mov     byte ptr [esp + 0x26], al
        mov     byte ptr [esp + 0x27], al
        mov     byte ptr [esp + 0x28], al
        mov     byte ptr [esp + 0x29], al
        mov     byte ptr [esp + 0x2a], al
        mov     byte ptr [esp + 0x2b], al
        mov     byte ptr [esp + 0x2c], al
        mov     byte ptr [esp + 0x2d], al
        mov     byte ptr [esp + 0x2e], al
        mov     byte ptr [esp + 0x2f], al
        mov     byte ptr [esp + 0x30], al
        mov     byte ptr [esp + 0x31], al
        mov     byte ptr [esp + 0x32], al
        mov     byte ptr [esp + 0x33], al
        mov     byte ptr [esp + 0x34], al
        mov     byte ptr [esp + 0x35], al
        mov     byte ptr [esp + 0x36], al
        mov     byte ptr [esp + 0x37], al
        mov     byte ptr [esp + 0x38], al
        mov     byte ptr [esp + 0x39], al
        mov     byte ptr [esp + 0x3a], al
        mov     byte ptr [esp + 0x3b], al
        mov     byte ptr [esp + 0x3c], al
        mov     byte ptr [esp + 0x3d], al
        mov     byte ptr [esp + 0x3e], al
        mov     byte ptr [esp + 0x3f], al
        mov     byte ptr [esp + 0x40], al
        mov     byte ptr [esp + 0x41], al
        mov     byte ptr [esp + 0x42], al
        mov     byte ptr [esp + 0x43], al
        mov     byte ptr [esp + 0x44], al
        mov     byte ptr [esp + 0x45], al
        mov     byte ptr [esp + 0x46], al
        mov     byte ptr [esp + 0x47], al
        mov     byte ptr [esp + 0x48], al
        mov     byte ptr [esp + 0x49], al
        mov     byte ptr [esp + 0x4a], al
        mov     byte ptr [esp + 0x4b], al
        mov     byte ptr [esp + 0x4c], al
        mov     byte ptr [esp + 0x4d], al
        mov     byte ptr [esp + 0x4e], al
        mov     byte ptr [esp + 0x4f], al
        lea     esi, [edi + 0x10]
        push    0x8
        lea     eax, [esp + 0xc]
        push    esi
        push    eax
        mov     byte ptr [esp + 0x1c], 0x80
        call    FUN_1000fd80
        mov     eax, dword ptr [esi]
        mov     ecx, 0x38
        shr     eax, 0x3
        and     eax, 0x3f
        cmp     eax, 0x38
        jc      L1
        mov     ecx, 0x78
L1:
        sub     ecx, eax
        push    ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_1000f210
        lea     edx, [esp + 0x8]
        push    0x8
        push    edx
        mov     ecx, edi
        call    FUN_1000f210
        mov     eax, dword ptr [esp + 0x54]
        push    0x10
        push    edi
        push    eax
        mov     ecx, edi
        call    FUN_1000fd80
        mov     ecx, 0x16
        xor     eax, eax
        rep stosd
        pop     edi
        pop     esi
        add     esp, 0x48
        ret     0x4
    }
}

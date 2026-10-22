/*
 * FUN_004d6740 (63 B) — __thiscall. If this->[0x8c] is zero, computes a
 * decoded object pointer from globals 0x007dab44/0x007dab40 and makes a
 * virtual call (slot 0x40) with the two args, then a virtual call
 * (slot 0x14) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_004d6740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+8ch]
        test    al, al
        jnz     L677B
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [esp+0ch]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx+20h]
        push    eax
        mov     eax, dword ptr [esp+0ch]
        xor     ecx, 85739531h
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+40h]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+14h]
    L677B:
        pop     esi
        ret     8
    }
}

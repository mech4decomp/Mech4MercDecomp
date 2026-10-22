/*
 * FUN_005bed20 (213 B) - __thiscall, RET 4 (1 param).
 *
 * Clears entity slot state, resets a linked entity, calls a virtual
 * method, and frees param via FUN_005e1340.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0061b210(void *this, int a);
extern void __cdecl FUN_005e1340(void *p);

__declspec(naked) void __fastcall FUN_005bed20(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0xc]
        mov     ebx, dword ptr [esp + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x307c]
        test    ecx, ecx
        jz      skip1
        mov     edx, dword ptr [eax]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 0x14]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x307c]
        call    FUN_0061b210
skip1:
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        mov eax, dword ptr [DAT_007dab40]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 0x14]
        push    esi
        lea     esi, [ebx + 0x14]
        xor     edx, eax
        mov     eax, ecx
        shl     eax, 0x7
        add     eax, ecx
        shl     eax, 0x3
        sub     eax, ecx
        mov     dword ptr [edi + ecx*0x4 + 0x530], 0x0
        mov     ecx, dword ptr [edx + 0xc]
        shl     eax, 0x3
        xor     ecx, 0x85739531
        mov     edi, dword ptr [ecx + eax*0x1 + 0x3584]
        test    edi, edi
        jz      skip2
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + eax*0x1 + 0x3584]
        mov     dword ptr [eax + 0x170], 0x0
skip2:
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        jz      skip3
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0xbc]
skip3:
        test    ebx, ebx
        pop     esi
        jz      skip4
        push    ebx
        call    FUN_005e1340
        add     esp, 0x4
skip4:
        pop     edi
        pop     ebx
        ret     0x4
    }


}

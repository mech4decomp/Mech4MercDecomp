/*
 * FUN_005d9330 (127 B) — Constructor-style initializer: set up an object
 * header, allocate a 0x6c-byte buffer, and call an init routine. RET 0x30.
 *
 * __thiscall (ECX = this), twelve stack params, RET 0x30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __fastcall FUN_005d9330(void *this)
{
    

extern int DAT_007f2464;
extern void __cdecl FUN_006f4924(void);
extern void __cdecl FUN_10040849d(void);
extern void __cdecl FUN_00684d85(void);
extern void __cdecl FUN_006f4939(void);
__asm {
mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x28]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x4], eax
        mov eax, dword ptr [DAT_007f2464]
        push    edi
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esi], 0x78829c
        mov     byte ptr [esi + 0x1d], bl
        mov     dword ptr [esi + 0x8], ecx
        mov     byte ptr [esi + 0xc], bl
        mov     byte ptr [esi + 0x1c], bl
        mov     dword ptr [esi + 0x18], edx
        call FUN_006f4924
        push    0x6c
        call FUN_10040849d
        mov     edi, dword ptr [esp + 0x3c]
        add     esp, 0x4
        cmp     eax, ebx
        jz      L9397
        mov     ecx, dword ptr [esp + 0x3c]
        push    ecx
        push    edi
        push    ebx
        lea     edx, [esp + 0x34]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        mov     ecx, eax
        call FUN_00684d85
        jmp     L9399
L9397:
        xor     eax, eax
L9399:
        mov     dword ptr [esi + 0x10], eax
        call FUN_006f4939
        mov     dword ptr [esi + 0x28], edi
        pop     edi
        mov     dword ptr [esi + 0x14], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x30
    }


}

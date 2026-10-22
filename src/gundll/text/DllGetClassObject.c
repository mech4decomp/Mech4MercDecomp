/*
 * DllGetClassObject (195 B) — __stdcall COM export, RET 0xC.
 * Compares rclsid against two known GUIDs (0x10049280, 0x100492a0),
 * then against the table at 0x10050040 (2 entries, 0x10 stride).
 * On match, allocates a 0xC-byte object via FUN_10001d50, initializes
 * it via FUN_10001180 (thiscall), and returns its IClassFactory via
 * the vtable QueryInterface/AddRef path.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void FUN_10001180(void);

__declspec(naked) void __stdcall DllGetClassObject(void* rclsid, void* riid,
                                                   void** ppv)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_c8
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     0xc
    L_c8:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, 0x4
        mov     edi, 0x10049280
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jz      L_fc
        mov     esi, eax
        mov     ecx, 0x4
        mov     edi, 0x100492a0
        xor     eax, eax
        repe    cmpsd
        jz      L_fc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004002
        pop     ebx
        ret     0xc
    L_fc:
        mov     edx, dword ptr [esp + 0x14]
        xor     ebx, ebx
        mov     eax, 0x10050040
    L_107:
        mov     edi, dword ptr [eax]
        mov     ecx, 0x4
        mov     esi, edx
        xor     ebp, ebp
        repe    cmpsd
        jz      L_12b
        inc     ebx
        add     eax, 0x10
        cmp     ebx, 0x1
        jc      L_107
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040111
        pop     ebx
        ret     0xc
    L_12b:
        push    0xc
        call    FUN_10001d50
        add     esp, 0x4
        test    eax, eax
        jz      L_147
        push    ebx
        mov     ecx, eax
        call    FUN_10001180
        mov     esi, eax
        test    esi, esi
        jnz     L_153
    L_147:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     0xc
    L_153:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi]
        push    edx
        push    eax
        push    esi
        call    dword ptr [ecx]
        mov     ecx, dword ptr [esi]
        push    esi
        mov     edi, eax
        call    dword ptr [ecx + 0x8]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}

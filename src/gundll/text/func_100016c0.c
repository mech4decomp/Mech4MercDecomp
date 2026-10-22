/*
 * FUN_100016c0 (233 B) - class-factory/destructor helper (__fastcall, ECX=this).
 * Sets up 9 vtable pointers, tears down sub-objects, deletes a critical section.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10002aa0(void);   /* rel32 call */
extern void __cdecl FUN_10008080(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_100017b0(void);   /* rel32 call (thunk) */
extern void __cdecl FUN_10007490(void);   /* rel32 call */
extern void __cdecl FUN_10007d90(void);   /* rel32 call */

extern void (__stdcall *g_DeleteCriticalSection)(void *);  /* IAT 0x100491a4 */

__declspec(naked) void __fastcall FUN_100016c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        mov     dword ptr [esi], 0x100493e0
        mov     dword ptr [esi + 4], 0x100493d0
        mov     dword ptr [esi + 8], 0x100493a8
        mov     dword ptr [esi + 0xc], 0x10049358
        mov     dword ptr [esi + 0x10], 0x10049320
        mov     dword ptr [esi + 0x14], 0x100492e8
        mov     dword ptr [esi + 0x18], 0x100492cc
        mov     dword ptr [esi + 0x1c], 0x100492b4
        mov     dword ptr [esi + 0x20], 0x100492b0
        call    FUN_10002aa0
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      L_15
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
L_15:
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        jz      L_22
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
L_22:
        mov     edi, dword ptr [esi + 0x38]
        test    edi, edi
        jz      L_39
        mov     ecx, edi
        call    FUN_10008080
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_39:
        mov     edi, dword ptr [esi + 0x3c]
        test    edi, edi
        jz      L_50
        mov     ecx, edi
        call    FUN_100017b0
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_50:
        mov     eax, dword ptr [esi + 0x58]
        push    eax
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        call    FUN_10001d60
        mov     edx, dword ptr [esi + 0x64]
        push    edx
        call    FUN_10001d60
        mov     edi, dword ptr [esi + 0x68]
        add     esp, 0xc
        test    edi, edi
        jz      L_85
        mov     ecx, edi
        call    FUN_10007490
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_85:
        mov     edi, dword ptr [esi + 0x6c]
        test    edi, edi
        jz      L_9c
        mov     ecx, edi
        call    FUN_10007d90
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_9c:
        add     esi, 0x70
        push    esi
        call    dword ptr [g_DeleteCriticalSection]
        pop     edi
        pop     esi
        ret
    }
}

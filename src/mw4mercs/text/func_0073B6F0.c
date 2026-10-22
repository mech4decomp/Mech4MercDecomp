/*
 * FUN_0073B6F0 (35 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern char g_00858959;
extern char g_00858954;
extern int  g_008aaef0;

__declspec(naked) void FUN_0073B6F0(void)
{
    __asm {
        mov    al, byte ptr [g_00858959]
        test   al, al
        sete   al
        mov    byte ptr [g_00858959], al
        mov    al, byte ptr [g_00858954]
        test   al, al
        je     done
        mov    dword ptr [g_008aaef0], 1
done:
        ret
    }
}
